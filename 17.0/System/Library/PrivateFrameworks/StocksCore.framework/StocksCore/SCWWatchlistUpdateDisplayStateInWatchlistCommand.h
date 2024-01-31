@class NSString, NSNumber;

@interface SCWWatchlistUpdateDisplayStateInWatchlistCommand : NSObject <SCWZoneCommand>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *watchlistIdentifier;
@property (readonly, copy, nonatomic) NSNumber *displayState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)executeWithZone:(id)a0;
- (id)initWithWatchlistIdentifier:(id)a0 displayState:(id)a1;

@end
