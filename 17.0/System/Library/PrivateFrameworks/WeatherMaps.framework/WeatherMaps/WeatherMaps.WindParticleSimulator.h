@interface WeatherMaps.WindParticleSimulator : _TtCs12_SwiftObject {
    void /* unknown type, empty encoding */ particles;
    void /* unknown type, empty encoding */ particleBucket;
    void /* unknown type, empty encoding */ particleAmount;
    void /* unknown type, empty encoding */ particleLifespan;
    void /* unknown type, empty encoding */ particleLifespanLowerVariance;
    void /* unknown type, empty encoding */ particleLifespanUpperVariance;
    void /* unknown type, empty encoding */ particleSpeed;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ tiledField;
    void /* unknown type, empty encoding */ fullField;
    void /* unknown type, empty encoding */ displayLink;
    void /* unknown type, empty encoding */ isRunning;
    void /* unknown type, empty encoding */ targetFPS;
    void /* unknown type, empty encoding */ timeIntervalSinceLastFrameUpdate;
    void /* unknown type, empty encoding */ timeEvolveReviveLastRun;
    void /* unknown type, empty encoding */ timeEvolveBucketLastRun;
    void /* unknown type, empty encoding */ visibleTiles;
    void /* unknown type, empty encoding */ nextSimulationCycleParameters;
    void /* unknown type, empty encoding */ simulationParametersLock;
    void /* unknown type, empty encoding */ isRunningCalculations;
    void /* unknown type, empty encoding */ trackedAnimatedTileKeys;
    void /* unknown type, empty encoding */ trackedAnimatedTileKeysLock;
    void /* unknown type, empty encoding */ signposter;
}

- (void)tick:(id)a0;

@end
