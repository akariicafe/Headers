@class NSSet, NSObject;
@protocol CRKClassKitChangeNotifierDelegate, CRKClassKitRosterRequirements;

@interface CRKClassKitChangeNotifier : NSObject

@property (readonly, nonatomic) NSObject<CRKClassKitRosterRequirements> *requirements;
@property (retain, nonatomic) id generalObserverToken;
@property (retain, nonatomic) id trustedPersonObserverToken;
@property (copy, nonatomic) NSSet *observedTrustedPersonIDs;
@property (weak, nonatomic) id<CRKClassKitChangeNotifierDelegate> delegate;

- (void)dealloc;
- (void)dataChanged;
- (id)initWithRequirements:(id)a0;
- (void).cxx_destruct;
- (id /* block */)makeObserverBlock;
- (void)startObservingGeneralChanges;
- (void)stopObservingGeneralChanges;
- (void)stopObservingTrustedPersons;
- (id)trustedPersonIDsInRoster:(id)a0;
- (BOOL)updateObservedTrustedPersonIDsWithRoster:(id)a0;

@end
