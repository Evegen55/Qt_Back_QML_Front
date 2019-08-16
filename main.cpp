#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQuickView>

int main(int argc, char *argv[])
{
        QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

        QGuiApplication app(argc, argv);

//        QQmlApplicationEngine engine;
//        engine.addImportPath("qrc:/QmlDs/imports");
//        const QUrl url(QStringLiteral("qrc:/QmlDs/QmlDs.qml"));
//        QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
//                         &app, [url](QObject *obj, const QUrl &objUrl) {
//            if (!obj && url == objUrl)
//                QCoreApplication::exit(-1);
//        }, Qt::QueuedConnection);
//        engine.load(url);

//        return app.exec();


    QQuickView view;
    view.setSource(QUrl("qrc:/QmlDs/QmlDs.qml"));
    if (!view.errors().isEmpty())
        return -1;
    view.show();

    app.exec();
}
