@class NSString, NSNumber;

@interface SCWWatchlistUpdateSortStateInWatchlistCommand : NSObject <SCWZoneCommand>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *watchlistIdentifier;
@property (readonly, copy, nonatomic) NSNumber *sortState;
@property (readonly, copy, nonatomic) NSNumber *sortOrderState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)executeWithZone:(id)a0;
- (id)initWithWatchlistIdentifier:(id)a0 sortState:(id)a1 sortOrderState:(id)a2;

@end
