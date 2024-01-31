@class NSString, CHRecognitionSession, NSMutableSet, NSMutableDictionary, NSMutableArray;
@protocol CHVisualizationManagerDelegate;

@interface CHVisualizationManager : NSObject <CHStrokeGroupBasedVisualizationDelegate, CHRecognitionSessionObserver> {
    BOOL __registeredAsChangeObserver;
    BOOL __registeredAsInputDrawingsClient;
    NSMutableSet *__enabledVisualizationIDs;
    NSMutableArray *__activeVisualizationIDs;
    NSMutableDictionary *__activeVisualizationsByID;
    NSMutableDictionary *__strokeGroupIndexByAncestorID;
}

@property (readonly, nonatomic) CHRecognitionSession *recognitionSession;
@property (nonatomic) id<CHVisualizationManagerDelegate> delegate;
@property (nonatomic) BOOL statusReportingEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)availableRecognitionSessionStatusKeys;
+ (id)localizedNameForRecognitionSessionStatusKey:(id)a0;
+ (id)availableVisualizationIdentifiers;
+ (id)localizedNameForVisualizationIdentifier:(id)a0;
+ (struct CGColor { } *)newColorForVisualizedItemAtIndex:(long long)a0;
+ (BOOL)variableHeightForRecognitionSessionStatusKey:(id)a0;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)valueForRecognitionStatusKey:(id)a0;
- (void)drawVisualizationInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 context:(struct CGContext { } *)a1 viewBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (id)initWithRecognitionSession:(id)a0;
- (void)recognitionSessionDidChangeStatus:(id)a0;
- (void)recognitionSessionDidUpdateRecognitionResult:(id)a0;
- (BOOL)isEnabledVisualizationForIdentifier:(id)a0;
- (void)setEnabled:(BOOL)a0 forVisualizationIdentifier:(id)a1;
- (void)toggleSelectiveVisualizationsAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)visualization:(id)a0 needsDisplayInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (long long)visualizationIndexForStrokeGroup:(id)a0;
- (void)visualizationNeedsDisplay:(id)a0;

@end
