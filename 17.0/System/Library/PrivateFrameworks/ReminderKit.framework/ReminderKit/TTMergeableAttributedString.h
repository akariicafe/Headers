@class NSString;

@interface TTMergeableAttributedString : TTMergeableUndoString <CRCoding>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allowlistedAttributesForModel;
+ (id)allowlistedAttributesForStyle;
+ (id)allowlistedTypingAttributes;
+ (int)attributeForWritingDirection:(long long)a0;
+ (id)attributesForRun:(const void *)a0;
+ (void)saveAttributes:(id)a0 toArchive:(void *)a1;
+ (void)saveAttributesOfString:(id)a0 toArchive:(void *)a1;
+ (long long)writingDirectionForAttribute:(int)a0;

- (void)insertString:(id)a0 atIndex:(unsigned long long)a1;
- (id)serialize;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withString:(id)a1;
- (id)attributesAtIndex:(unsigned long long)a0 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (void)encodeWithCRCoder:(id)a0;
- (void)setAttributes:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)initWithCRCoder:(id)a0;
- (BOOL)attributesEqual:(id)a0 to:(id)a1 modelEqual:(BOOL *)a2;
- (BOOL)attributesEqual:(id)a0 toRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 modelEqual:(BOOL *)a2;
- (void)encodeWithCRCoder:(id)a0 string:(void *)a1;
- (id)initWithArchive:(const void *)a0 andReplicaID:(id)a1 withOrderedSubstrings:(void *)a2 timestamp:(id)a3;
- (id)initWithCRCoder:(id)a0 string:(const void *)a1;
- (void)saveDeltaSinceTimestamp:(id)a0 toArchive:(void *)a1;
- (void)saveToArchive:(void *)a0;
- (void)setAttributes:(id)a0 substring:(void *)a1;

@end
