@interface ICNANoteInlineAttachmentReport : NSObject

@property (nonatomic) unsigned long long countOfTags;
@property (nonatomic) unsigned long long countOfDistinctTags;
@property (nonatomic) unsigned long long countOfMentions;
@property (nonatomic) unsigned long long countOfDistinctMentions;
@property (nonatomic) unsigned long long countOfNoteLinks;
@property (nonatomic) unsigned long long countOfDistinctNoteLinks;
@property (nonatomic) unsigned long long countOfFolderLinks;
@property (nonatomic) unsigned long long countOfDistinctFolderLinks;

@end
