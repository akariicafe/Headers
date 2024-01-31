@class NSArray, NSString, NSLocale;

@interface TITypingSessionAligned : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *alignedEntries;
@property (retain, nonatomic) NSString *alignedText;
@property (retain, nonatomic) NSString *highConfAlignedSubSegment;
@property (nonatomic) BOOL success;
@property (nonatomic) BOOL containsCPEntries;
@property (nonatomic) unsigned long long firstCPEntryIndex;
@property (readonly, nonatomic) NSArray *layouts;
@property (readonly, nonatomic) NSLocale *locale;
@property (readonly, nonatomic) NSString *completeText;

+ (id)alignedEntryForWord:(id)a0;
+ (id)alignedPathTouchesForWord:(id)a0;
+ (id)completeStringFromWordEntry:(id)a0 leadingInputs:(id)a1 trailingInputs:(id)a2 followsContinuousPath:(BOOL)a3;
+ (id)resolveBackspacesInKeyboardInputs:(id)a0;

- (id)initWithSession:(id)a0;
- (void)getAlignedTextAndConfidence;
- (void)encodeWithCoder:(id)a0;
- (id)restrictedAlignedSessionWithWordLimit:(unsigned long long)a0;
- (id)textToAppendForEntry:(id)a0 sessionIndx:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)computeAlignedWordsFromSession:(id)a0;
- (BOOL)isNewLineScenarioWithCurrentWord:(id)a0 andPreviousWord:(id)a1;
- (id)initWithCoder:(id)a0;
- (BOOL)compareForConfidenceContextA:(id)a0 contextB:(id)a1;

@end
