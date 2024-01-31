@interface PUWallpaperHelper : NSObject

+ (id)deleteSuggestionAction:(id)a0;
+ (id)fileRadarActionForComponent:(long long)a0 title:(id)a1 suggestion:(id)a2 asset:(id)a3 actionBeingHandler:(id /* block */)a4 actionEndHandler:(id /* block */)a5;
+ (id)fileRadarSubmenuForSuggestion:(id)a0 asset:(id)a1 actionBeingHandler:(id /* block */)a2 actionEndHandler:(id /* block */)a3;
+ (id)presentPosterEditorWithAsset:(id)a0 fromViewController:(id)a1;
+ (id)rejectSuggestionAction:(id)a0;

@end
