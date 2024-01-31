@class NSSet;

@interface CNUICoreContactScratchpad : NSObject

@property (class, readonly, nonatomic) CNUICoreContactScratchpad *emptyScratchpad;

@property (readonly, nonatomic) NSSet *edits;
@property (readonly, nonatomic) NSSet *allContacts;
@property (readonly, nonatomic) NSSet *modifiedContacts;

+ (id)editMatchingContact:(id)a0 inEdits:(id)a1;
+ (id)editsByReplacingEdit:(id)a0 withUpdatedEdit:(id)a1 inEdits:(id)a2;
+ (id)scratchpadByAddingUneditedContact:(id)a0 toScratchpad:(id)a1;
+ (id)scratchpadByRemovingModifiedContact:(id)a0 fromScratchpad:(id)a1;
+ (id)scratchpadBySettingModifiedContact:(id)a0 onExistingEditInScratchpad:(id)a1;

- (id)init;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)containsContact:(id)a0;
- (id)initWithEdits:(id)a0;
- (id)modifiedContactForContact:(id)a0;
- (id)modifiedIfPresentOtherwiseOriginalContactForContact:(id)a0;
- (id)scratchpadByAddingContacts:(id)a0;
- (id)scratchpadByKeepingContacts:(id)a0;
- (id)scratchpadByRemovingContacts:(id)a0;

@end
