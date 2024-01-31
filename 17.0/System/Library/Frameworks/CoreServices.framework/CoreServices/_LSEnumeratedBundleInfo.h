@class NSString;

@interface _LSEnumeratedBundleInfo : NSObject

@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) BOOL isPlaceholder;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithBundleID:(id)a0 isPlaceholder:(BOOL)a1;

@end
