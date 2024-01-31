@interface ARCoachingInstanceTransform : NSObject {
    struct { void /* unknown type, empty encoding */ columns[4]; } _baseTransform;
    struct { void /* unknown type, empty encoding */ columns[4]; } _transform;
    void /* unknown type, empty encoding */ _localScale;
    void /* unknown type, empty encoding */ _localTranslation;
}

@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ x0[4]; } transform;
@property (nonatomic) void /* unknown type, empty encoding */ localScale;
@property (nonatomic) void /* unknown type, empty encoding */ recordedScale;
@property (nonatomic) void /* unknown type, empty encoding */ localTranslation;
@property (nonatomic) void /* unknown type, empty encoding */ recordedTranslation;

- (id)init:(struct { void /* unknown type, empty encoding */ x0[4]; })a0;
- (void)doTransform;

@end
