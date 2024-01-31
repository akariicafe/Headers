@class NSString, FBSDisplayIdentity;

@interface EXBDisplayArrangementItem : NSObject <NSCopying, NSSecureCoding, BSDescriptionStreamable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) FBSDisplayIdentity *relativeDisplayIdentity;
@property (readonly, nonatomic) unsigned int edge;
@property (readonly, nonatomic) double offset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (void)appendDescriptionToFormatter:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRelativeDisplayIdentity:(id)a0 edge:(unsigned int)a1 offset:(double)a2;

@end
