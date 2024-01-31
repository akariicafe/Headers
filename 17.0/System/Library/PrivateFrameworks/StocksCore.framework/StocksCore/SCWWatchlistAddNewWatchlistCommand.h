@class NSString, NSArray, NSNumber;

@interface SCWWatchlistAddNewWatchlistCommand : NSObject <SCWZoneCommand>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSArray *symbols;
@property (readonly, copy, nonatomic) NSString *watchlistIdentifier;
@property (readonly, copy, nonatomic) NSNumber *sortState;
@property (readonly, copy, nonatomic) NSNumber *sortOrderState;
@property (readonly, copy, nonatomic) NSNumber *displayState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)executeWithZone:(id)a0;
- (id)initWithName:(id)a0 identifier:(id)a1 sortState:(id)a2 sortOrderState:(id)a3 displayState:(id)a4;
- (id)initWithName:(id)a0 identifier:(id)a1 symbols:(id)a2 sortState:(id)a3 sortOrderState:(id)a4 displayState:(id)a5;

@end
