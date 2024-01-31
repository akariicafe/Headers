@class NSString, _SFPBImage, NSArray, NSData, _SFPBCommand;

@interface _SFPBCommandButtonItem : PBCodable <_SFPBCommandButtonItem, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _SFPBImage *image;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) _SFPBCommand *command;
@property (copy, nonatomic) NSArray *previewButtonItems;
@property (nonatomic) BOOL isDestructive;
@property (nonatomic) unsigned long long uniqueId;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)initWithFacade:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)addPreviewButtonItems:(id)a0;
- (void)clearPreviewButtonItems;
- (id)previewButtonItemsAtIndex:(unsigned long long)a0;
- (unsigned long long)previewButtonItemsCount;

@end
