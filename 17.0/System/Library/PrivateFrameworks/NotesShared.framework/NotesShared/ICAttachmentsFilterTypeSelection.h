@interface ICAttachmentsFilterTypeSelection : ICFilterTypeSelection

@property (nonatomic) unsigned long long selectionType;

- (id)filterName;
- (long long)filterType;
- (unsigned long long)hash;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAttachmentSection:(short)a0;
- (id)initWithSelectionType:(unsigned long long)a0;
- (BOOL)isEqualToICAttachmentsFilterTypeSelection:(id)a0;
- (id)rawFilterValue;

@end
