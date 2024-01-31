@class NSString, NSURL;

@interface BLHLSMedia : NSObject

@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSString *name;

- (id)description;
- (void).cxx_destruct;
- (void)setPropertiesFromAttributeList:(id)a0;

@end
