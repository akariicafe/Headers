@class NSArray, NSString;

@interface _MPCPlayerRepeatCommand : _MPCPlayerCommand <MPCPlayerRepeatCommand>

@property (nonatomic) long long currentRepeatType;
@property (retain, nonatomic) NSArray *supportedRepeatTypes;
@property (nonatomic) BOOL supportsChangeRepeat;
@property (nonatomic) BOOL supportsAdvanceRepeat;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)advance;
- (id)setRepeatType:(long long)a0;

@end
