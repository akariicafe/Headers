@class NSString, NSDictionary;

@interface PatternLoadResult : NSObject

@property (retain, nonatomic) NSString *patternId;
@property (nonatomic) unsigned long long patternType;
@property (retain, nonatomic) NSDictionary *settings;
@property (retain, nonatomic) NSDictionary *meta;
@property (retain, nonatomic) NSDictionary *groups;

- (void).cxx_destruct;
- (id)getPrompts;

@end
