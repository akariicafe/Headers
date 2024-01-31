@interface HDAttachmentEntity : HDHealthEntity

+ (id)databaseTable;
+ (BOOL)enumerateAttachmentsWithPredicate:(id)a0 transaction:(id)a1 error:(id *)a2 enumerationHandler:(id /* block */)a3;
+ (id)attachmentWithIdentifier:(id)a0 transaction:(id)a1 error:(id *)a2;
+ (id)_insertIfDoesNotExistAttachment:(id)a0 transaction:(id)a1 error:(id *)a2;
+ (id)_insertAttachment:(id)a0 transaction:(id)a1 error:(id *)a2;
+ (id)attachmentWithIdentifier:(id)a0 profile:(id)a1 error:(id *)a2;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (long long)protectionClass;

@end
