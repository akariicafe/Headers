@class NSString;

@interface ScriptInfo : NSObject

@property (readonly, nonatomic) unsigned long long scriptID;
@property (readonly, nonatomic) NSString *scriptName;
@property (readonly, nonatomic) unsigned int apduCount;
@property (readonly, nonatomic) unsigned int scriptType;

- (void).cxx_destruct;
- (id)initWithScriptID:(unsigned long long)a0 scriptName:(id)a1 apduCount:(unsigned int)a2 scriptType:(unsigned int)a3;

@end
