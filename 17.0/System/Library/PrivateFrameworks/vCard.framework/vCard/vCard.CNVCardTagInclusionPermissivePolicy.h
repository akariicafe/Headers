@interface vCard.CNVCardTagInclusionPermissivePolicy : NSObject <vCard.CNVCardTagInclusionPolicy>

@property (nonatomic) void /* unknown type, empty encoding */ shouldCaptureUnknownTags;

- (id)init;
- (BOOL)shouldParseTag:(id)a0;

@end
