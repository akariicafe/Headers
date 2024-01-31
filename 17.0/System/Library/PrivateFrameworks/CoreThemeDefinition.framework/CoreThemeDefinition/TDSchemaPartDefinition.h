@class NSString, NSSet, CUIImage, NSArray, TDSchemaDefinition;

@interface TDSchemaPartDefinition : NSManagedObject

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *widgetID;
@property (retain, nonatomic) TDSchemaDefinition *element;
@property (retain, nonatomic) NSSet *productions;
@property (retain, nonatomic) CUIImage *previewImage;
@property (copy, nonatomic) NSArray *renditions;
@property (retain, nonatomic) NSArray *renditionGroups;
@property (nonatomic) unsigned long long partFeatures;

- (id)_schema;
- (void)didTurnIntoFault;
- (void)dealloc;
- (long long)elementID;
- (long long)partID;
- (id)displayName;
- (long long)_renditionKeyValueForTokenIdentifier:(unsigned short)a0;
- (id)bestPreviewRendition;
- (const struct { char *x0; char *x1; struct _renditionkeytoken { unsigned short x0; unsigned short x1; } x2[5]; long long x3; long long x4; struct { char *x0; char *x1; long long x2; unsigned long long x3; } x5[12]; } *)cuiPartDefinition;
- (void)updateDerivedRenditionData;
- (id)validStatesWithDocument:(id)a0;

@end
