@class ICNote, NSString, ICMentionsParticipantNode, NSMutableDictionary, ICTableColumnTextView, UITextView, ICAttachmentInsertionController, NSMutableSet, NSObject;
@protocol ICMentionsKeyboardDelegate, OS_dispatch_queue, NSObject, ICMentionsAnalyticsDelegate;

@interface ICMentionsController : NSObject <ICMentionsControllerUI> {
    NSObject<OS_dispatch_queue> *_contactsRequestQueue;
    id /* block */ _contactsRequestBlock;
}

@property (weak, nonatomic) ICNote *note;
@property (retain, nonatomic) NSMutableDictionary *participantDictionary;
@property (retain, nonatomic) NSMutableSet *participantRecordNames;
@property (retain, nonatomic) NSMutableSet *participantNames;
@property (retain, nonatomic) ICMentionsParticipantNode *participantTree;
@property (nonatomic) unsigned long long maxNameLength;
@property (readonly, nonatomic) BOOL allowsMentions;
@property (nonatomic) BOOL isUpdatingKeyboard;
@property (weak, nonatomic) ICAttachmentInsertionController *attachmentInsertionController;
@property (weak, nonatomic) id<ICMentionsKeyboardDelegate> mentionsKeyboardDelegate;
@property (weak, nonatomic) id<ICMentionsKeyboardDelegate> mentionsTableKeyboardDelegate;
@property (weak, nonatomic) ICTableColumnTextView *tableTextView;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } editedRange;
@property (readonly, nonatomic) unsigned long long maxLengthOfStringForCheckingMention;
@property (weak, nonatomic) UITextView *textView;
@property (weak, nonatomic) id<ICMentionsAnalyticsDelegate> analyticsDelegate;
@property (retain, nonatomic) id<NSObject> contactsChangedObserverToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isValidPostfixCharacter:(unsigned short)a0;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 appendingSubstringRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
+ (BOOL)range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 hasValidPostfixCharacterForString:(id)a1;
+ (BOOL)range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 isPrefixedWithAtForString:(id)a1;
+ (id)allKeyword;
+ (id)allUserRecordName;
+ (BOOL)isBeginningExplicitMentionAtSelectionRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inString:(id)a1 languageHasSpaces:(BOOL)a2;
+ (BOOL)isValidPrefixCharacter:(unsigned short)a0 languageHasSpaces:(BOOL)a1;
+ (BOOL)range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 hasValidPrefixCharacterForString:(id)a1 languageHasSpaces:(BOOL)a2;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfLastCharacterInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)updateMentionsAssociations;
- (id)checkForMentionsInString:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 selectionRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 languageHasSpaces:(BOOL)a3;
- (id)initWithNote:(id)a0;
- (void)updateNoteParticipants;
- (void)addAllKeywordToParticipantTree;
- (void)associateParticipant:(id)a0 withKey:(id)a1;
- (id)participantsForKey:(id)a0;

@end
