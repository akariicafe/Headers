@interface CHTextStrokeTransformationQuery : CHQuery

- (id)debugName;
- (id)strokePointTransformationsForContextStrokes:(id)a0 completionWithTelemetry:(id /* block */)a1 shouldCancel:(id /* block */)a2;
- (id)strokePointTransformations:(long long)a0 forContextStrokes:(id)a1 withTransformationParameters:(id)a2 completionWithTelemetry:(id /* block */)a3 shouldCancel:(id /* block */)a4;

@end
