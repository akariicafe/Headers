@class ICTTTodo, NSUUID;

@interface ICTTMutableParagraphStyle : ICTTParagraphStyle

@property (nonatomic) unsigned int style;
@property (nonatomic) long long alignment;
@property (nonatomic) long long writingDirection;
@property (nonatomic) unsigned long long indent;
@property (nonatomic) unsigned long long blockQuoteLevel;
@property (nonatomic) unsigned long long startingItemNumber;
@property (retain, nonatomic) ICTTTodo *todo;
@property (nonatomic) unsigned int hints;
@property (nonatomic) BOOL needsParagraphCleanup;
@property (nonatomic) BOOL needsListCleanup;
@property (copy, nonatomic) NSUUID *uuid;

+ (id)paragraphStyleNamed:(unsigned int)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
