#ifndef PARTICLEWIDGET_H
#define PARTICLEWIDGET_H

#include <QOpenGLWidget>
#include <GL/glu.h>
#include "world.h"
#include <QVector>


class ParticleWidget : public QOpenGLWidget {
        Q_OBJECT
private:
    SGeometry mBoxGeometry;
    QVector<SParticle> mParticles;
public:
    ParticleWidget(QWidget *parent = 0);
    void clearGL();
    void initializeWorld(SGeometry geometry, QVector<SParticle> particles);

public slots:
    void setBoxGeometry(const SGeometry& newGeometry);
    void setParticles(const QVector<SParticle>& newParticles);


protected:
    void initializeGL();
    void resizeGL(int width, int height);
    void paintGL();

};

#endif // PARTICLEWIDGET_H
