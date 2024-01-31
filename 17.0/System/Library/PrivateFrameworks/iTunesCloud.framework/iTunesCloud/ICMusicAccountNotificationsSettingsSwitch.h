@class NSString, NSDictionary, NSMutableDictionary;

@interface ICMusicAccountNotificationsSettingsSwitch : NSObject {
    NSMutableDictionary *_valueDictionary;
    BOOL _isToggled;
    BOOL _hasBeenPreviouslyToggled;
}

@property (nonatomic) BOOL isToggled;
@property (readonly, nonatomic) BOOL hasBeenPreviouslyToggled;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSDictionary *itemResponseDictionary;

- (id)initWithToggleState:(BOOL)a0 hasBeenToggled:(BOOL)a1 identifier:(id)a2;
- (void)setHasBeenPreviouslyToggled:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithItemResponseDictionary:(id)a0;

@end
