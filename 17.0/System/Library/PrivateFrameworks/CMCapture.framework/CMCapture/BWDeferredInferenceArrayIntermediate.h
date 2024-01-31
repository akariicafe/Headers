@class NSString;

@interface BWDeferredInferenceArrayIntermediate : BWDeferredArrayIntermediate

@property (readonly, nonatomic) NSString *inferenceAttachmentKey;
@property (readonly, nonatomic) NSString *portType;

+ (BOOL)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithArray:(id)a0 tag:(id)a1 inferenceAttachmentKey:(id)a2 portType:(id)a3 URL:(id)a4;

@end
