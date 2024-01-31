@class NSString, NSURL;

@interface MLModelCollectionEntry : NSObject

@property (readonly, nonatomic) NSString *modelIdentifier;
@property (readonly, nonatomic) NSURL *modelURL;

+ (id)entryWithModelIdentifier:(id)a0 modelURL:(id)a1;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)_initWithModelIdentifier:(id)a0 modelUrl:(id)a1;
- (BOOL)isEqualToModelCollectionEntry:(id)a0;

@end
