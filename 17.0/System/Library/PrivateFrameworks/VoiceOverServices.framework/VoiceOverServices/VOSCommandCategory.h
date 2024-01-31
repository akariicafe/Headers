@class NSArray, NSString;

@interface VOSCommandCategory : NSObject

@property (class, readonly, nonatomic) VOSCommandCategory *interaction;
@property (class, readonly, nonatomic) VOSCommandCategory *basicNavigation;
@property (class, readonly, nonatomic) VOSCommandCategory *textNavigation;
@property (class, readonly, nonatomic) VOSCommandCategory *advancedNavigation;
@property (class, readonly, nonatomic) VOSCommandCategory *editing;
@property (class, readonly, nonatomic) VOSCommandCategory *rotor;
@property (class, readonly, nonatomic) VOSCommandCategory *scrolling;
@property (class, readonly, nonatomic) VOSCommandCategory *speechAndAudio;
@property (class, readonly, nonatomic) VOSCommandCategory *output;
@property (class, readonly, nonatomic) VOSCommandCategory *voiceOverFeatures;
@property (class, readonly, nonatomic) VOSCommandCategory *system;
@property (class, readonly, nonatomic) VOSCommandCategory *other;
@property (class, readonly, nonatomic) VOSCommandCategory *braille;
@property (class, readonly, nonatomic) VOSCommandCategory *internalOnly;
@property (class, readonly, nonatomic) NSArray *allCategories;
@property (class, readonly, nonatomic) VOSCommandCategory *handwriting;
@property (class, readonly, nonatomic) VOSCommandCategory *brailleScreenInput;

@property (retain, nonatomic) NSArray *commands;
@property (retain, nonatomic) NSString *localizedCategoryName;

+ (BOOL)categories:(id)a0 containsCommand:(id)a1;

- (id)init;
- (BOOL)containsCommand:(id)a0;
- (void).cxx_destruct;
- (id)initWithCommands:(id)a0 localizedCategoryName:(id)a1;

@end
