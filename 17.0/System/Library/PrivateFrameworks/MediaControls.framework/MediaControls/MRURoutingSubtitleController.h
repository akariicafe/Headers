@class NSString, NSMutableDictionary, UIImage;
@protocol MRURoutingSubtitleControllerDelegate;

@interface MRURoutingSubtitleController : NSObject

@property (retain, nonatomic) NSMutableDictionary *storage;
@property (readonly, nonatomic) long long state;
@property (weak, nonatomic) id<MRURoutingSubtitleControllerDelegate> delegate;
@property (readonly, nonatomic) BOOL hasText;
@property (readonly, nonatomic) BOOL canTransitionToNextState;
@property (readonly, copy, nonatomic) NSString *text;
@property (readonly, nonatomic) UIImage *icon;
@property (readonly, nonatomic) long long accessory;

- (id)init;
- (void)prepareForReuse;
- (id)description;
- (void).cxx_destruct;
- (long long)nextAvailableTextState;
- (void)setText:(id)a0 forState:(long long)a1;
- (void)setText:(id)a0 forState:(long long)a1 accessory:(long long)a2;
- (void)setText:(id)a0 icon:(id)a1 forState:(long long)a2;
- (void)setText:(id)a0 icon:(id)a1 forState:(long long)a2 accessory:(long long)a3;
- (void)transitionToNextAvailableState;

@end
