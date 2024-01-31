@class NSString, NSMutableArray;

@interface BMPBContextualActionEvent : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL hasAppName;
@property (retain, nonatomic) NSString *appName;
@property (readonly, nonatomic) BOOL hasActionName;
@property (retain, nonatomic) NSString *actionName;
@property (retain, nonatomic) NSMutableArray *contents;
@property (retain, nonatomic) NSMutableArray *parameters;

+ (Class)contentType;
+ (Class)parameterType;

- (void)clearContents;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)parametersCount;
- (void)clearParameters;
- (id)contentAtIndex:(unsigned long long)a0;
- (void)addContent:(id)a0;
- (unsigned long long)contentsCount;
- (void)addParameter:(id)a0;
- (id)parameterAtIndex:(unsigned long long)a0;

@end
