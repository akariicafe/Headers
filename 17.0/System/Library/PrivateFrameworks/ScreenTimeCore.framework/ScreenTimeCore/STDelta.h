@class NSDictionary, NSString;

@interface STDelta : NSObject

@property (retain, nonatomic) NSDictionary *dictionary;
@property (readonly, copy, nonatomic) NSString *uniqueIdentifier;
@property (readonly, nonatomic) long long changeType;

- (void)deleted;
- (void).cxx_destruct;
- (id)initWithUniqueIdentifier:(id)a0;
- (void)changedWithDictionary:(id)a0;

@end
