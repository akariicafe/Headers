@class NSArray;

@interface TTSRegexMatch : NSObject

@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } utf8Range;
@property (retain, nonatomic) NSArray *captureGroups;

- (void).cxx_destruct;

@end
