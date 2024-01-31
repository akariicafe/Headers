@class NSString, NSMutableSet, NSArray;
@protocol DSSource;

@interface DSPublicSharingType : NSObject

@property (retain, nonatomic) id<DSSource> source;
@property (retain, nonatomic) NSMutableSet *publicResources;
@property (readonly, nonatomic) long long score;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, copy, nonatomic) NSString *localizedDetailText;
@property (readonly, copy, nonatomic) NSArray *allPublicResources;

+ (void)initialize;

- (id)initWithSource:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)stopAllSharingOnQueue:(id)a0 completion:(id /* block */)a1;
- (void)addPublicResource:(id)a0;
- (void)removePublicResource:(id)a0;
- (void)stopSharingResource:(id)a0 onQueue:(id)a1 completion:(id /* block */)a2;

@end
