@class NSString;

@interface ASCViewInAppStoreOfferMetadata : ASCOfferMetadata

@property (readonly, copy, nonatomic) NSString *title;

+ (BOOL)supportsSecureCoding;

- (id)init;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isViewInAppStore;

@end
