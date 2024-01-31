@class DEDistribution, NSString, NSDictionary, DEPatternContext, DEExecutionContext;

@interface DEExecutor : NSObject

@property (retain, nonatomic) NSString *templateDir;
@property (retain, nonatomic) NSString *catId;
@property (retain, nonatomic) NSString *locale;
@property (retain, nonatomic) NSDictionary *dialogMetadata;
@property (retain, nonatomic) NSString *interactionId;
@property (retain, nonatomic) NSString *patternId;
@property (retain, nonatomic) NSString *responseMode;
@property (retain, nonatomic) NSDictionary *parameters;
@property (retain, nonatomic) NSDictionary *globalParameters;
@property (retain, nonatomic) NSDictionary *userSettings;
@property (retain, nonatomic) NSString *pluginName;
@property (retain, nonatomic) DEExecutionContext *context;
@property (copy, nonatomic) id /* block */ callback;
@property (nonatomic) BOOL visual;
@property (nonatomic) BOOL debug;
@property (nonatomic) BOOL test;
@property (nonatomic) BOOL resetState;
@property (nonatomic) BOOL multiuser;
@property (nonatomic) BOOL grounding;
@property (nonatomic) BOOL enableUpdates;
@property (nonatomic) BOOL createTrace;
@property (nonatomic) BOOL switchFallthrough;
@property (retain, nonatomic) NSString *voiceGender;
@property (nonatomic) unsigned int randomSeed;
@property (nonatomic) long long currentTime;
@property (retain, nonatomic) DEDistribution *distribution;
@property (retain, nonatomic) NSDictionary *customPronunciations;
@property (nonatomic) BOOL deterministic;
@property (retain, nonatomic) DEPatternContext *patternContext;
@property (nonatomic) BOOL isSpotlight;
@property (nonatomic) BOOL isLabelMode;

+ (void)executeWithJson:(id)a0 completionBlock:(id /* block */)a1;
+ (void)initialize;
+ (id)bundleTemplateDir:(id)a0;
+ (void)preload;
+ (void)executeWithJson:(id)a0 paramsString:(id)a1 localeString:(id)a2 callback:(id /* block */)a3 completionBlock:(id /* block */)a4;
+ (id /* block */)prepareCallback:(id /* block */)a0 forContext:(void *)a1;
+ (void)executeWithJson:(id)a0 callback:(id /* block */)a1 completionBlock:(id /* block */)a2;

- (id)init;
- (id)execute;
- (void).cxx_destruct;
- (struct shared_ptr<siri::dialogengine::Context> { struct Context *x0; struct __shared_weak_count *x1; })getContext:(struct ElapsedTimer { unsigned long long x0; struct TimeStamp { double x0; double x1; } x1; struct optional<siri::dialogengine::ElapsedTimer::TimeStamp> { union { char x0; struct TimeStamp { double x0; double x1; } x1; } x0; BOOL x1; } x2; })a0;
- (void)LogCurareCATExecution:(const void *)a0;
- (id)consumeContext:(struct shared_ptr<siri::dialogengine::Context> { struct Context *x0; struct __shared_weak_count *x1; })a0 paramsPath:(struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x0; struct __short { char x0[23]; unsigned char x1[0]; unsigned char x2 : 7; unsigned char x3 : 1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; })a1 localePath:(struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x0; struct __short { char x0[23]; unsigned char x1[0]; unsigned char x2 : 7; unsigned char x3 : 1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; })a2 visualPath:(struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x0; struct __short { char x0[23]; unsigned char x1[0]; unsigned char x2 : 7; unsigned char x3 : 1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; })a3;
- (struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x0; struct __short { char x0[23]; unsigned char x1[0]; unsigned char x2 : 7; unsigned char x3 : 1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; })consumeContextForJson:(struct shared_ptr<siri::dialogengine::Context> { struct Context *x0; struct __shared_weak_count *x1; })a0;
- (id)executeVisual:(id)a0;
- (void)executeVisual:(id)a0 completionBlock:(id /* block */)a1;
- (void)executeWithCompletionBlock:(id /* block */)a0;
- (id)executeWithParams:(id)a0 locale:(id)a1;
- (void)executeWithParams:(id)a0 locale:(id)a1 completionBlock:(id /* block */)a2;
- (id)executeWithParams:(id)a0 locale:(id)a1 visual:(id)a2;
- (id)getRequestJSON;
- (void)updateContext:(void *)a0 paramsPath:(struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x0; struct __short { char x0[23]; unsigned char x1[0]; unsigned char x2 : 7; unsigned char x3 : 1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; })a1 localePath:(struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x0; struct __short { char x0[23]; unsigned char x1[0]; unsigned char x2 : 7; unsigned char x3 : 1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; })a2 visualPath:(struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x0; struct __short { char x0[23]; unsigned char x1[0]; unsigned char x2 : 7; unsigned char x3 : 1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; })a3;

@end
