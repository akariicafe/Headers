@interface IEPatternizer : NSObject

- (BOOL)generateCATs:(id)a0 noOverwrite:(BOOL)a1 deleteText:(BOOL)a2 userParamTypes:(id)a3;
- (BOOL)generatePatterns:(id)a0 noOverwrite:(BOOL)a1 deleteText:(BOOL)a2 userParamTypes:(id)a3;
- (BOOL)updateCATMetadata:(id)a0 withMeta:(id)a1;

@end
