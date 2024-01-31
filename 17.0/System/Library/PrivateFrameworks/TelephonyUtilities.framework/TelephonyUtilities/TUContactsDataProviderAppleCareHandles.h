@class NSSet;

@interface TUContactsDataProviderAppleCareHandles : NSObject

@property (readonly, copy, nonatomic) NSSet *appleCareHandles;

- (id)init;
- (BOOL)contains:(id)a0;
- (void).cxx_destruct;
- (void)loadHandles;

@end
