@interface NPKLibrary : NSObject

@property (nonatomic) BOOL needsRelevancyInformation;

+ (id)sharedInstance;

- (void)addPassData:(id)a0 completion:(id /* block */)a1;

@end
