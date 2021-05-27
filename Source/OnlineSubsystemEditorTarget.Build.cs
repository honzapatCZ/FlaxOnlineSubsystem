using Flax.Build;

public class OnlineSubsystemEditorTarget : GameProjectEditorTarget
{
    /// <inheritdoc />
    public override void Init()
    {
        base.Init();

        // Reference the modules for editor
        Modules.Add("OnlineSubsystem");
    }
}