@class NSArray, NSString;

@interface TTSAssistantAsset : NSObject {
    void /* unknown type, empty encoding */ supportedLanguages;
    void /* unknown type, empty encoding */ name;
    void /* unknown type, empty encoding */ identifier;
}

@property (nonatomic, readonly) NSArray *supportedLanguages;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ assistantGender;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ assistantOrder;
@property (nonatomic, readonly) BOOL isCustom;
@property (nonatomic, readonly) NSString *primaryLanguage;
@property (nonatomic, readonly) long long gender;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;

@end
