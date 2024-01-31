@class NSString;

@interface TULocalNicknameInfo : NSObject

@property (readonly, copy, nonatomic) NSString *shortNickname;

- (id)init;
- (id)appleTVNicknameForDeviceName:(id)a0;
- (id)formattedDisplayNameForIMNickname:(id)a0 style:(long long)a1;
- (id)nicknameWithFormatterStyle:(long long)a0;

@end
