@class NSString, NSDictionary;

@interface RTTServiceUpdate : NSObject

@property (retain, nonatomic) NSString *serviceUpdateType;
@property (retain, nonatomic) NSDictionary *options;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithServiceUpdateType:(id)a0 options:(id)a1;
- (id)optionValueForKey:(id)a0;

@end
