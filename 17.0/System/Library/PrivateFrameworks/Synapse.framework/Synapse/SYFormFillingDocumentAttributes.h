@interface SYFormFillingDocumentAttributes : NSObject <NSCopying>

@property (readonly, nonatomic) BOOL formFillingCoachingDisabled;

+ (id)formFillingDocumentAttributesForFileAtURL:(id)a0 error:(id *)a1;
+ (BOOL)removeFormFillingDocumentAttributesForFileAtURL:(id)a0 error:(id *)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)saveToFileURL:(id)a0 error:(id *)a1;
- (id)initWithFormFillingCoachingDisabled:(BOOL)a0;

@end
