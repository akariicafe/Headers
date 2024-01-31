@class NSSet;

@interface SBDodgingItemPreference : NSObject

@property (readonly, nonatomic) struct CGSize { double width; double height; } preferredSize;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } preferredCenter;
@property (readonly, nonatomic, getter=isUpdatingInteractively) BOOL updateInteractively;
@property (readonly, nonatomic) unsigned long long dodgingAxisMask;
@property (readonly, nonatomic) struct CGSize { double width; double height; } minimumSize;
@property (readonly, nonatomic) BOOL canBePositionedOutsideContainerBounds;
@property (readonly, nonatomic) NSSet *excludedDodgingIdentifiers;

- (void).cxx_destruct;
- (id)initWithPreferredSize:(struct CGSize { double x0; double x1; })a0 preferredCenter:(struct CGPoint { double x0; double x1; })a1 updateInteractively:(BOOL)a2 dodgingAxisMask:(unsigned long long)a3 minimumSize:(struct CGSize { double x0; double x1; })a4 canBePositionedOutsideContainerBounds:(BOOL)a5 excludedDodgingIdentifiers:(id)a6;

@end
