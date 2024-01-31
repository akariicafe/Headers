@class NSOrderedSet, NSString;

@interface SCWWatchlistReorderAllSymbolsInWatchlistCommand : NSObject <SCWZoneCommand>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSOrderedSet *symbols;
@property (readonly, copy, nonatomic) NSString *watchlistIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)executeWithZone:(id)a0;
- (id)initWithSymbols:(id)a0 watchlistIdentifier:(id)a1;

@end
