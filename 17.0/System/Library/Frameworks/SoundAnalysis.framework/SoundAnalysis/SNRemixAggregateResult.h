@interface SNRemixAggregateResult : NSObject {
    float _dialogueGain;
    float _ambienceGain;
    float _dialogueLoudness;
    float _ambienceLoudness;
    float _recordingLoudness;
}

@property (readonly, nonatomic) float dialogueGain;
@property (readonly, nonatomic) float ambienceGain;
@property (readonly, nonatomic) float dialogueLoudness;
@property (readonly, nonatomic) float ambienceLoudness;
@property (readonly, nonatomic) float recordingLoudness;

@end
