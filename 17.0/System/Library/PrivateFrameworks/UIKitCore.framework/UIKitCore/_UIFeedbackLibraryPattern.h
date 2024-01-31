@class NSString, CHHapticPattern;

@interface _UIFeedbackLibraryPattern : _UIFeedback <_UIFeedbackCoreHapticsPaternProviding> {
    CHHapticPattern *_pattern;
}

@property (readonly, nonatomic) NSString *libraryKey;
@property (readonly, nonatomic) CHHapticPattern *pattern;
@property (readonly, nonatomic, getter=isHighPriority) BOOL highPriority;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;
+ (id)type;
+ (id)feedbackPatternWithLibraryKey:(id)a0;

- (void).cxx_destruct;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)_effectivePlayableFeedbackTypes;
- (id)initWithLibraryKey:(id)a0;

@end
