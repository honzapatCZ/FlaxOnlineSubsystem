using Flax.Build;
using Flax.Build.NativeCpp;
using System.Linq;

public class OnlinePlatform : GameModule
{
    /// <inheritdoc />
    public override void Init()
    {
        base.Init();
    }

    /// <inheritdoc />
    public override void Setup(BuildOptions options)
    {
        base.Setup(options);

        Flax.Build.Log.Info(string.Join(" ", options.PublicDefinitions));
        Flax.Build.Log.Info(string.Join(" ", options.ScriptingAPI.Defines));        
        
        if (options.ScriptingAPI.Defines.Contains("STEAMWORKS_NET_FLAX") && (options.Platform.Target == TargetPlatform.Windows || options.Platform.Target == TargetPlatform.Linux))
        {
            Flax.Build.Log.Info("Prosil bych 5 deka steamu");
            options.PublicDependencies.Add("SteamWorksNETFlax");
        }
            

        options.ScriptingAPI.IgnoreMissingDocumentationWarnings = true;

        // Here you can modify the build options for your game module
        // To reference another module use: options.PublicDependencies.Add("Audio");
        // To add C++ define use: options.PublicDefinitions.Add("COMPILE_WITH_FLAX");
        // To learn more see scripting documentation.
    }
}
