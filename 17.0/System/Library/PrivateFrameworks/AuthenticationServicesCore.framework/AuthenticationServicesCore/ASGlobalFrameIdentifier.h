@class NSNumber, WBSGlobalFrameIdentifier;

@interface ASGlobalFrameIdentifier : NSObject <NSCopying, NSSecureCoding> {
    WBSGlobalFrameIdentifier *_coreFrameIdentifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSNumber *webPageID;
@property (readonly, nonatomic) NSNumber *webFrameID;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithPageID:(id)a0 frameID:(id)a1;
- (id)initWithCoreFrameIdentifier:(id)a0;

@end
