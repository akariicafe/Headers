@interface PXTimelineDiagnosticAgent : NSObject

+ (id)errorMessage:(id)a0 jsonFormat:(BOOL)a1;
+ (id)jsonStringFromObject:(id)a0;
+ (id)timelineDiagnosticForAlbum:(id)a0 widgetSize:(id)a1 jsonFormat:(BOOL)a2;
+ (id)timelineDiagnosticForWidgetSize:(id)a0 jsonFormat:(BOOL)a1;

@end
