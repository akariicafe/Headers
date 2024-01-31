@class NSMutableDictionary;

@interface XRSchemaElementsRecursiveParser : XRXMLElementParser <XRSchemaAnnotationPropertyReportingDelegate> {
    NSMutableDictionary *_errorReplacementsByKey;
}

- (void).cxx_destruct;
- (void)_handleStart;
- (void)elementWithName:(id)a0 parser:(id)a1 key:(id)a2 finishedWithErrorReplacement:(id)a3;
- (id)errorMessagesReplacements;
- (id)startElementWithName:(id)a0 attributes:(id)a1 line:(long long)a2 col:(long long)a3;

@end
