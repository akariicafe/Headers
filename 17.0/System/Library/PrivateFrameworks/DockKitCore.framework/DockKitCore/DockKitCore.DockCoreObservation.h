@interface DockKitCore.DockCoreObservation : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ groupId;
    void /* unknown type, empty encoding */ printConfidence;
    void /* unknown type, empty encoding */ modality;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) void /* unknown type, empty encoding */ type;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ identifier;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ X;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ Y;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ width;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ height;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ trackerID;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ yawAngle;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ pitchAngle;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ confidence;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ newTrack;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
