using Flax.Build;

public class OnlineSubsystemTarget : GameProjectTarget
{
    /// <inheritdoc />
    public override void Init()
    {
        base.Init();

        // Reference the modules for game
        Modules.Add("OnlineSubsystem");
    }
}